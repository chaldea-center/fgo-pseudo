void __fastcall CheckUpdateShiftTask___ctor(CheckUpdateShiftTask_o *this, const MethodInfo *method)
{
  GeneralRelayTask___ctor((GeneralRelayTask_o *)this, 0LL);
}


BattleLogicTask_array *__fastcall CheckUpdateShiftTask__MakeActionTask(
        CheckUpdateShiftTask_o *this,
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x19
  BattleLogicNomal_o *logicnomal; // x0
  __int64 v22; // x1
  CheckEnemyShiftAfterTask_o *v23; // x20

  if ( (byte_42E9BA3 & 1) == 0 )
  {
    sub_B5D5C4(&CheckEnemyShiftAfterTask_TypeInfo, (_DWORD)logic, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v17, v18, v19);
    byte_42E9BA3 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !logic
    || (logicnomal = logic->fields.logicnomal) == 0LL
    || (logicnomal = (BattleLogicNomal_o *)BattleLogicNomal__taskCheckShiftServants(logicnomal, 55, 0LL, 0LL), !v20) )
  {
    sub_B5D69C(logicnomal, v22);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v20,
    (System_Collections_Generic_IEnumerable_T__o *)logicnomal,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  v23 = (CheckEnemyShiftAfterTask_o *)sub_B5D694(CheckEnemyShiftAfterTask_TypeInfo);
  CheckEnemyShiftAfterTask___ctor(v23, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v20,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}