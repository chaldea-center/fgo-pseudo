void __fastcall BattleLogicPlayerAi___ctor(BattleLogicPlayerAi_o *this, const MethodInfo *method)
{
  BattleLogicBaseAi___ctor((BattleLogicBaseAi_o *)this, 0LL);
}


void __fastcall BattleLogicPlayerAi__Initialize(
        BattleLogicPlayerAi_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct BattleLogic_o *logic; // x8
  struct BattleLogicEnemyAi_o *logicEnemyAi; // x8
  struct AiLogic_o *aiLogic; // x1

  BattleLogicBaseAi__Initialize((BattleLogicBaseAi_o *)this, data, 0LL);
  logic = this->fields.logic;
  if ( !logic || (logicEnemyAi = logic->fields.logicEnemyAi) == 0LL )
    sub_B170D4();
  aiLogic = logicEnemyAi->fields.aiLogic;
  this->fields.aiLogic = aiLogic;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.aiLogic,
    (System_Int32_array **)aiLogic,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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
    sub_B170D4();
  return BattleData__getFieldEnemyServantIDList(data, 0, 0LL);
}


System_Int32_array *__fastcall BattleLogicPlayerAi__get_PartySvtIds(
        BattleLogicPlayerAi_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_B170D4();
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  AiActEntity_o *AiActEntity; // x0
  int32_t type; // w23
  AiActEntity_o *v15; // x22
  AiState_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x24
  AiState_o *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  ServantAiActArgument_o *v28; // x25

  if ( (byte_40FC443 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, svtData);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    sub_B16FFC(&ServantAiActArgument_TypeInfo, v12);
    byte_40FC443 = 1;
  }
  if ( !aiEnt )
    goto LABEL_11;
  AiActEntity = BattleLogicBaseAi__GetAiActEntity((BattleLogicBaseAi_o *)this, aiEnt->fields.aiActId, 0LL);
  if ( !AiActEntity || !svtData )
    goto LABEL_11;
  type = AiActEntity->fields.type;
  v15 = AiActEntity;
  v16 = (AiState_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._18_getAiState.method)(
                       svtData,
                       svtData->klass->vtable._19_ExistAiThinking.methodPtr);
  if ( BattleLogicBaseAi__IsChangeThinkingOnly((BattleLogicBaseAi_o *)this, type, (AiBaseEntity_o *)aiEnt, v16, 0LL) )
    return this->fields.emptyTask;
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19,
                                                                                                  v20);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v23 = (AiState_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._18_getAiState.method)(
                       svtData,
                       svtData->klass->vtable._19_ExistAiThinking.methodPtr);
  if ( !v23
    || (AiState__setBeforeAction(v23, type, aiEnt->fields.aiActId, 0LL),
        v28 = (ServantAiActArgument_o *)sub_B170CC(ServantAiActArgument_TypeInfo, v24, v25, v26, v27),
        ServantAiActArgument___ctor(v28, v15, (AiBaseEntity_o *)aiEnt, svtData, 0, 0LL),
        BattleLogicBaseAi__SetProcAiActTask(
          (BattleLogicBaseAi_o *)this,
          (System_Collections_Generic_List_BattleLogicTask__o *)v22,
          type,
          (BaseAiActArgument_o *)v28,
          0LL),
        !v22) )
  {
LABEL_11:
    sub_B170D4();
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v22,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}