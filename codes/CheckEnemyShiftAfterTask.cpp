void __fastcall CheckEnemyShiftAfterTask___ctor(CheckEnemyShiftAfterTask_o *this, const MethodInfo *method)
{
  GeneralRelayTask___ctor((GeneralRelayTask_o *)this, 0LL);
}


BattleLogicTask_array *__fastcall CheckEnemyShiftAfterTask__MakeActionTask(
        CheckEnemyShiftAfterTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  BattleLogicReaction_o *logicReaction; // x0
  __int64 v6; // x1

  if ( (byte_438C382 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B775C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_438C382 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !logic
    || (logicReaction = logic->fields.logicReaction) == 0LL
    || (logicReaction = (BattleLogicReaction_o *)BattleLogicReaction__CheckEnemyShiftAfter(logicReaction, 73, 0LL, 0LL),
        !v4) )
  {
    sub_B7769C(logicReaction, v6);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v4,
    (System_Collections_Generic_IEnumerable_T__o *)logicReaction,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v4,
                                    (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}