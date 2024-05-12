void __fastcall CheckUpdateShiftTask___ctor(CheckUpdateShiftTask_o *this, const MethodInfo *method)
{
  GeneralRelayTask___ctor((GeneralRelayTask_o *)this, 0LL);
}


BattleLogicTask_array *__fastcall CheckUpdateShiftTask__MakeActionTask(
        CheckUpdateShiftTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x19
  BattleLogicNomal_o *logicnomal; // x0
  __int64 v6; // x1
  GeneralRelayTask_o *v7; // x20

  if ( (byte_438C3C2 & 1) == 0 )
  {
    sub_B775C4(&CheckEnemyShiftAfterTask_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B775C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_438C3C2 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !logic
    || (logicnomal = logic->fields.logicnomal) == 0LL
    || (logicnomal = (BattleLogicNomal_o *)BattleLogicNomal__taskCheckShiftServants(logicnomal, 55, 0LL, 0LL), !v4) )
  {
    sub_B7769C(logicnomal, v6);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v4,
    (System_Collections_Generic_IEnumerable_T__o *)logicnomal,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  v7 = (GeneralRelayTask_o *)sub_B77694(CheckEnemyShiftAfterTask_TypeInfo);
  GeneralRelayTask___ctor(v7, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v4,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v7,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v4,
                                    (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}