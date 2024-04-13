void __fastcall CheckEnemyShiftAfterTask___ctor(CheckEnemyShiftAfterTask_o *this, const MethodInfo *method)
{
  GeneralRelayTask___ctor((GeneralRelayTask_o *)this, 0LL);
}


BattleLogicTask_array *__fastcall CheckEnemyShiftAfterTask__MakeActionTask(
        CheckEnemyShiftAfterTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  BattleLogicReaction_o *logicReaction; // x0
  __int64 v16; // x1

  if ( (byte_42E9732 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, (_DWORD)logic, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11, v12, v13);
    byte_42E9732 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !logic
    || (logicReaction = logic->fields.logicReaction) == 0LL
    || (logicReaction = (BattleLogicReaction_o *)BattleLogicReaction__CheckEnemyShiftAfter(logicReaction, 73, 0LL, 0LL),
        !v14) )
  {
    sub_B5D69C(logicReaction, v16);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v14,
    (System_Collections_Generic_IEnumerable_T__o *)logicReaction,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}