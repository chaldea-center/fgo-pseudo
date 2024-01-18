void __fastcall CheckEnemyShiftAfterTask___ctor(CheckEnemyShiftAfterTask_o *this, const MethodInfo *method)
{
  GeneralRelayTask___ctor((GeneralRelayTask_o *)this, 0LL);
}


BattleLogicTask_array *__fastcall CheckEnemyShiftAfterTask__MakeActionTask(
        CheckEnemyShiftAfterTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  BattleLogicReaction_o *logicReaction; // x0
  __int64 v9; // x1

  if ( (byte_4187CBB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, logic);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v6);
    byte_4187CBB = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !logic
    || (logicReaction = logic->fields.logicReaction) == 0LL
    || (logicReaction = (BattleLogicReaction_o *)BattleLogicReaction__CheckEnemyShiftAfter(logicReaction, 73, 0LL, 0LL),
        !v7) )
  {
    sub_B2C434(logicReaction, v9);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v7,
    (System_Collections_Generic_IEnumerable_T__o *)logicReaction,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}