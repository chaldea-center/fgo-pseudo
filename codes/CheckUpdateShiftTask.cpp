void __fastcall CheckUpdateShiftTask___ctor(CheckUpdateShiftTask_o *this, const MethodInfo *method)
{
  GeneralRelayTask___ctor((GeneralRelayTask_o *)this, 0LL);
}


BattleLogicTask_array *__fastcall CheckUpdateShiftTask__MakeActionTask(
        CheckUpdateShiftTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  BattleLogicNomal_o *logicnomal; // x0
  __int64 v11; // x1
  GeneralRelayTask_o *v12; // x20

  if ( (byte_4187CFB & 1) == 0 )
  {
    sub_B2C35C(&CheckEnemyShiftAfterTask_TypeInfo, logic);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_4187CFB = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !logic
    || (logicnomal = logic->fields.logicnomal) == 0LL
    || (logicnomal = (BattleLogicNomal_o *)BattleLogicNomal__taskCheckShiftServants(logicnomal, 55, 0LL, 0LL), !v9) )
  {
    sub_B2C434(logicnomal, v11);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v9,
    (System_Collections_Generic_IEnumerable_T__o *)logicnomal,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  v12 = (GeneralRelayTask_o *)sub_B2C42C(CheckEnemyShiftAfterTask_TypeInfo);
  GeneralRelayTask___ctor(v12, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v9,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}